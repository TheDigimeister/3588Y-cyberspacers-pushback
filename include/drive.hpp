#pragma once

#include "lemlib/chassis/chassis.hpp"
#include "pros/adi.hpp"
#include "pros/distance.hpp"
#include "pros/optical.hpp"

extern lemlib::Chassis chassis;
extern pros::Motor front_intake;
extern pros::Motor intake_2;
extern pros::Motor top_intake;
extern pros::ADIDigitalOut Low;
extern pros::Motor baseleftmiddle;
extern pros::Motor baserightmiddle;
extern pros::Optical Color_sensor;
extern pros::ADIDigitalOut Switch;

extern pros::Distance front_dist;
extern pros::Distance back_dist;
extern pros::Distance left_dist;
extern pros::Distance right_dist;