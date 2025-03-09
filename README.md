# Accelerator-Pedal-Position-Sensor

USING MBD (MODEL-BASED-DEVELOPMENT) APPROACH 

 Case Study : Accelerator Pedal Position Sensor 
The accelerator pedal position sensor is a critical component in modern automotive systems, providing input to the engine control unit (ECU) about the driver's intended acceleration. 

Developing an algebraic model for this sensor is crucial for accurately translating pedal position into a corresponding signal for the ECU.

Accelerator Pedal: The physical pedal that the driver interacts with.

Sensor Mechanism: Converts the pedal's mechanical movement into an electrical signal.

Signal Processing Unit: Part of the ECU that interprets the sensor signal.

The aim is to model dual potentiometer accelerator pedal sensor as a simulink block diagram. 

1. INPUT : Accelerator Pedal Position
   
2. OUTPUT : Potentiometer Voltage
   
  a. range [0 ….  5] V
  
  b. valid range [0.5 …. 4.5] V
  
  c. invalid range 
    i. Less than 0.5 (probable short circuit to ground) 
    ii. More than 4.5 (probable short circuit to power supply)
    
Note: 
 ● Pedal not pressed at 0.5 V.
 ● Pedal pressed at 4.5 V. 
 ● Linear relationship between input and output.

Let P represent the pedal position.

Let S represent the sensor output voltage.

The relationship between pedal position and sensor output can be modeled using a linear equation: S=mP+b
where

 m is the slope (sensitivity) and b is the y-intercept
 
 # Modeling Decision Logic System Using Simulink Blocks 
 
 The two sensor signals provide different readings, hence the engine ECU can perform a coherency check to determine the validity of the sensor signal
 
 ● Accelerator pedal position sensor 1 
 
   ○ Not Pressed is 0.5 V 
   
   ○ Pressed is 4.5 V 
   
● Accelerator pedal position sensor 2 

  ○ Not Pressed is 4.5 V 
  
  ○ Pressed is 0.5 V 
  
● Invalid range 

 ○ Less Than 0.5 V
 
 ○ More Than 4.5 V 

It is required to implement a decision logic to determine.

 ○ APP_bSensor1Failure
 
   ■ Sensor 1 reading is invalid 
   
 ○ APP_bSensor1Failure 
 
   ■ Sensor 2 reading is invalid 
   
 ○ APP_bCoherencyFailure 
 
   ■ The reading from sensor 1 & sensor 2 are not coherent

we will do a MIL test with the following 3 test scenarios:

   Scenario 1: APP_vSensor1: 0.5 v – 4.5 V  && APP_vSensor2: 4.5 v – 0.5 V 
   
   Scenario 2: APP_vSensor1: 0 v – 4.5 V  && APP_vSensor2: 4.5 v – 0.5 V
   
   Scenario 3: APP_vSensor1: 0.5 v – 4.5 V  && APP_vSensor2: 5 v – 0.5 V 

After that we are going to generate a C code from this model for an atmel AVR microcontroller.

then we can do the SIL test to confirm.
