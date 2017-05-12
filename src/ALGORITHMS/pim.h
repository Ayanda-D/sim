/* ****************************************************************
 * Copyright Stanford University 1998,99 - All Rights Reserved
 ****************************************************************** 

 * Permission to use, copy, modify, and distribute this software 
 * and its documentation for any purpose is hereby granted without 
 * fee, provided that the above copyright notice appears in all copies
 * and that both the copyright notice, this permission notice, and 
 * the following disclaimer appear in supporting documentation, and 
 * that the name of Stanford University, not be used in advertising or 
 * publicity pertaining to distribution of the software without specific,
 * written prior permission.
 * 
 * STANFORD UNIVERSITY, DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS
 * SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND 
 * FITNESS. IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE FOR ANY 
 * SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER 
 * RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION 
 * OF CONTRACT, NEGLIGENCE OR OTHER ACTION, ARISING OUT OF OR IN 
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


/*
 * The Sim Web Site : http://klamath.stanford.edu/tools/SIM
 * The SIM Mailing List: sim-simulator@lists.stanford.edu

 * Send mail to the above email address with "subscribe sim-simulator" in
 * the body of the message.
 *
 */

typedef struct {
	int		*grant;		/* Array of outputs that have granted to this input */
	int		accept;		/* Outputs that this input has accepted (None = -1) */
	unsigned short int rseed[3];
} InputSchedulerState;

typedef struct {
	int		*request; 	/* Array of inputs that are requesting this input */
	int		grant;		/* Input that this output has granted to */
	int 	accept;		/* Input that has accepted this output */
	unsigned short int rseed[3];
} OutputSchedulerState;

typedef struct {
	InputSchedulerState  **inputSched;  /* Ptr to array of ptrs to input	*/
										/* scheduler state. 1 per input.	*/
	OutputSchedulerState **outputSched; /* Ptr to array of ptrs to output	*/
										/* scheduler state. 1 per output.	*/
	int  numIterations;
} SchedulerState;