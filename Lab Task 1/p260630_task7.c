#include <stdio.h>

int main() {

    float velocity = 12.5f;
    float acceleration = 3.2f;
    float time = 6.0f;
    float final_velocity = velocity + (acceleration * time);
    float distance = (velocity * time) + (0.5f * acceleration * time * time);

    printf("             KINEMATICS MOTION REPORT \n");
    printf("Initial Velocity (vi):              %.2f m/s\n", velocity);
    printf("Acceleration (a):                   %.2f m/s^2\n", acceleration);
    printf("Time Elapsed (t):                   %.2f s\n", time);
    
    printf("\nCalculated Final Velocity (vf):     %.2f m/s\n", final_velocity);
    printf("Calculated Distance (s):            %.2f m\n", distance);
   
    return 0;
}