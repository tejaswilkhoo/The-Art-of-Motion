# The Art of Motion
More of a project rather than something with a definite goal. Every robot I've ever made had one thing for sure: Wheels (as do literally 99% of competitive Vex robots). Arguably the most important mechanism, the drivetrain literally moves the entire robot itself from point A to point B, so making sure that it can move *well* is always important.

Okay next question... what do I mean by moving *well*? Everytime you code a movement (even a simple one, like move forward for 3.0 metres), you expect it to move forward 3.0 metres. But in reality, we all know that it is not going to move exactly 3.0 metres, it might be close, but usually it's going to be above or below by a little bit due to uncontrollable aspects like inertia, and even the time the robot brain takes to communicate with motors.

There are different ways a robot can move 3.0 metres too in terms of acceleration and slowing down, such as moving 3.0 metres by accelerating and reaching full speed very quickly, or maybe even accelerating a little slower but eventually still reaching full speed. These different methods can be graphed, and using integral functions (area under the curve), the expected value can be calculated, as to how much a robot really *should* move. The next step is to program the robot for each style of movement, and then to compare the different methods of movement to see which one is the closest to the expected value.

The repository only contains code which probably doesn't describe everything there is to learn, but the full publication is available at: 
https://d3f74302-3327-46a9-9082-28f37e885560.filesusr.com/ugd/b7d83c_20028695352342ce901782ad1fd25174.pdf?index=true
