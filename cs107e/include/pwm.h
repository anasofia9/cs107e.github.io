#ifndef PWM_H
#define PWM_H

/*
 * Hardware abstractions for pulse width modulation (PWM) of
 * digital signals.
 *
 * Author: Pat Hanrahan <hanrahan@cs.stanford.edu>
 * Date: Feb 15, 2016
 */

/*
 * Initialize the pwm module. 
 */
void pwm_init(void);

/*
 * Set the PWM clock frequency.
 *
 * @param frequency      the frequency of the PWM clock
*/
void pwm_clock(int frequency);

/*
 * Set the PWM mode.
 *
 * @param chan      the PWM channel - either 0 or 1
 * @param enable    disable(=0) or enable=(=1) the channel.
 * @param markspace use MARKSPACE mode or SIGMADELTA mode
 * @param usefifo   usefifo or not
 */
#define PWM_SIGMADELTA 0
#define PWM_MARKSPACE  1
void pwm_set_mode(int chan, int enable, int markspace, int usefifo);

/*
 * Set the PWM range for the given channel
 *
 * @param chan      the PWM channel - either 0 or 1
 * @param range     range (typically between 0 and 4095)
 */
void pwm_set_range(int chan, int range);

/*
 * Set the PWM width for the given channel
 *
 * @param chan      the PWM channel - either 0 or 1
 * @param width     width (typically between 0 and 4095). A width of range/2
 *                  corresponds to a 50% duty cycle.
 */
void pwm_set_width(int chan, int width);

/*
 * Write a value to all channels
 *
 * @param value     value (typically between 0 and 4095). Set the PWM width 
 *                  to value.
 */
void pwm_write(int value);

/*
 * Read the current status of the PWM channel.
 *
 * @return the current status of the channels. If PWM_FULL1 is set, then
 * need to wait until the channel is not full before writing a new value.
 */
#define PWM_FULL1 0x01
int pwm_get_status(void);

#endif
