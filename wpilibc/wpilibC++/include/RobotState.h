/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/
#pragma once

#include <memory>

class RobotStateInterface {
 public:
  virtual ~RobotStateInterface() = default;
  virtual bool IsDisabled() const = 0;
  virtual bool IsEnabled() const = 0;
  virtual bool IsOperatorControl() const = 0;
  virtual bool IsAutonomous() const = 0;
  virtual bool IsTest() const = 0;
};

class RobotState {
 private:
  static std::shared_ptr<RobotStateInterface> impl;

 public:
  static void SetImplementation(RobotStateInterface& i);
  static void SetImplementation(std::shared_ptr<RobotStateInterface> i);
  static bool IsDisabled();
  static bool IsEnabled();
  static bool IsOperatorControl();
  static bool IsAutonomous();
  static bool IsTest();
};
