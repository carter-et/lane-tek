# lane-tek
Bowling Lane simulation project by Ethan Carter and David Baas. Written in C++ 20.

# sources
## Bowling Lane measurements
https://www.dlgsc.wa.gov.au/sport-and-recreation/sports-dimensions-guide/tenpin-bowling#:~:text=The%20length%20of%20a%20regulation,There%20are%2039%20boards.

# Design
## Represent the bowling lane
Use metic 
Represent the lane as a sereis of points in a cartiesian plane. 

struct Point:
    x
    y
    oil level (micro litires)
Oil level will be used to mesture the amount of friction force applied the lane. 
https://sciencing.com/calculate-force-friction-6454395.html
