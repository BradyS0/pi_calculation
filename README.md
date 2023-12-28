# pi_calculation
calculates pi using geometry
One day I found that a cool way to find pi. It uses the fact that the ratio of a the area of a circle over the area of a square that has side lengths equal to the diameter of the circle is pi/4. This also means if you have the circle inscibed in the square, and you select a random x,y coordinate, the ratio of dots in the circle over total dots, and multiply that by 4, you'll get pi. So I created two programs that would do that. One in proccessing, one in c.

The processing version that is accompanied by a visualization that shows the dots and the circle.
The c version uses a makefile to compile and run by typing make followed by make run.

Comparing the two, it seems like the processing version gets closer to pi with far less dots but I'm not entirely sure why, I haven't really tried to see why though.
