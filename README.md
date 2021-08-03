# IOT Mailbox Notifier
Mail Notifier prototype provides an example of how IOT technology can be used to create a
solution to a modern problem (in this case caused by a pandemic) as well as how these
technologies can be integrated with existing technology such as smartphones. It also shows how
older less technologically advanced systems and appliances such as a simple mailbox can be
upgraded or more modernized using low-cost platforms.

# Contents
- [1 Project Scope](#1-project-scope)
	* [1.1 Problem statement](##1.1-problem-statement)
	* [1.2 Use Case](#1.2-use-case)
		+ [1.2.1 Case Example 1](#1.2.1-case-example-1)
		+ [1.2.1 Case Example 2](#1.2.2-use-case)
		 

- [2 Requirement Analysis](#2-requirement-analysis)
	* [2.1 Hardware Rewuirements](#2.1-hardware-rewuirements)
	* [2.2 Software Requirements](#2.2-software-requirements)
	* [2.3 System Specifications](#2.3-system-specifications)

- [3 Design and Implementation](#3-design-and-implementation)
	* [3.1 Prototype Design Model](#3.1-prototype-design-model)
	* [3.2 Implementation](#3.2-implementation)
	* [3.3 Debugging](#3.3-debugging)
	* [3.4 Blynk Dashboard Configuration](#3.4-blynk-dashboard-configuration)
	* [3.5 Analysis and Design Issues](#3.5-analysis-and-design-issues)	

- [4 Conclusion](#4-conclusion)

## 1 Project Scope
### 1.1 Problem statement
With the surge of people staying at home due to the pandemic, more and more people have been
at home receiving letters and parcels through their receiving mailbox since the amount of people
ordering items has spiked globally.
The proposed solution to this problem is an IOT device that will detect any form of parcel or mail
that is posted through the users mailbox and once detected will notify the user on their device or
platform of choice once it happens.
The device will be WIFI capable in order to communicate with the user and will be able to update
them from anywhere as long as they have a connection

### 1.2 Use Case
Below the potential use cases of the proposed solution is described, and the goes into detail of
how the solution would benefit the user over already existing methods.

#### 1.2.1 Case Example 1
This first case describes the scenario in which the user is carrying out a task which cannot have
any loud noises in their home from a door ringer system. For example, in recent time due to the
pandemic, more and more meeting has been carried out at home with low quality microphones
with little to no sound isolation, which ultimately allows background sounds to be picked up more
easily. In the case that the user is expecting important mail or postage through their mailbox, they
may have to find workarounds with their system such as push to talk, or even potentially
reschedule their mail to another later time or date that they could deal with the noise. With a IOT
Mail Notifier, they would not need to use those work arounds and could simply silence their ringer
and allow the device to notify them when their mail has arrived so they can pay more attention to
the meeting. This use case also extends to users that wear headphones during important work
sessions that cannot hear whether mail has been posted through their letter box. The proposed
device would notify them through their mobile device that they have mail when it has arrived.

#### 1.2.2 Case Example 2
This next case describes the scenario where the user is not at home or is out and cannot be
present when the mail or parcel comes through the mailbox. An example for this scenario is where
the user is far away and is expecting an important parcel and cannot be there to check if it has
arrived through their door safely. Since the device is connected through a cloud server, the device
is connected to the user’s mobile device and is able to notify them wherever they are at the exact
moment that the mail or parcel enters through the mailbox. Although there are tracking apps for
a majority of parcel delivery services, it can be hit or miss as to whether or not they update the
tracking information in a timely manner, and sometimes do not at all, so having a solution that
regardless will update the user on the ultimate delivery oi their package immediately is helpful. In
the case that the user is utilising a service that does not have tracking, the proposed IOT Mail
Notifier will a device that would offer piece of mind that a package is delivered. Thus, alleviating
some of the reliance in having a dedicating tracking app when choosing the mail service.

## 2 Requirement Analysis
In this section the requirements of the system will be documented in detail and discussed, as well
as the reasoning behind the set requirements.

### 2.1 Hardware Rewuirements
The hardware that is used for the device is important for a wide variety of reasons. The hardware
will influence the compatibility of the system to existing IOT architecture and will influence how
simple the IOT device is to implement in an already existing network.
Since the IOT Mail Notifier will need to sense the mail coming through the mailbox, there are
several sensors that have been taken into consideration.
The IOT Mail Notifier will also need to have hardware with functionality capable of connecting to
the internet via WIFI.
The size will also need to be taken into account and it will need to be small enough to be able to
the suitable for a variety of mailbox locations since not all mailboxes in houses function the same
or share the same aesthetics.

### 2.2 Software Requirements
The software requirements are more geared towards how the parts of the system communicate
with one another and communicate via the internet to the user’s mobile device.
Since this will be an io T capable device no need to be the server evolved that the information will
be sent to and download it by the uses mobile device. Taking this into consideration the server
chosen to host the information will be important and would need to be suitable for the type of data
and information that is being uploaded or downloaded from it. 

### 2.3 System Specifications
Here is a list of the specifications that the system will need made as a result of the considerations
made regarding the hardware and software [3]:
- Microcontroller
	- Microcontroller: Arduino Uno WIFI Rev 2
		- ATmega4809
		- Operating Voltage: 5V
		▪ Input Voltage: 7-12 V
		▪ 5 PWM I/O Pins
		▪ DC Current per I/O Pin: 20mA
		▪ Dimensions (L x W): 68.6 x 53.4 mm
- Sensing Functions
	- Obstacle Avoidance Sensor Module
	- SW-420 Vibration Sensor Module [4]
	- Microphone Module
• Communication
	o Communications chipset on the Arduino UNO WiFi Rev.2 can be both a BLE and Bluetooth® client and host device.
	o able to connect it to a WiFi network, using its secure ECC608 crypto chip accelerator [5].
• Interface & GUI
	o Blynk Application Dashboard
	o Mobile Device Notification Tray (Android or IOS)
• System Power
	o 9V DC Battery
	o Battery Holder w/ Toggle ON/OFF Switch

## 3 Design and Implementation
### 3.1 Prototype Design Model
### 3.2 Implementation
### 3.3 Debugging
### 3.4 Blynk Dashboard Configuration
### 3.5 Analysis and Design Issues


## 4 Conclusion

