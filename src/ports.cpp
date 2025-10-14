#include "main.h"

pros::Motor front_intake(11);
//front_intake should be outaking into the goals if its voltage is at -127.
pros::Motor top_intake(8);
//top_intake should be outaking into the goals if its voltage is at 127.
pros::Motor intake_2(-9);
//intake 2 should be outaking into the goals if its voltage is at -127.
pros::Motor baserightmiddle(18);
pros::Motor baseleftmiddle(-15);
// pros::Optical back_color_sensor(4);
pros::Optical color_sensor(4);

pros::ADIDigitalOut Low('A');
pros::ADIDigitalOut Switch('D');
pros::ADIDigitalOut matchload('C');

pros::Distance back_dist(5);
pros::Distance front_dist(3);
pros::Distance left_dist(2);
pros::Distance right_dist(1);