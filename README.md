# IOT Mailbox Notifier
Mail Notifier prototype provides an example of how IOT technology can be used to create a
solution to a modern problem (in this case caused by a pandemic) as well as how these
technologies can be integrated with existing technology such as smartphones. It also shows how
older less technologically advanced systems and appliances such as a simple mailbox can be
upgraded or more modernized using low-cost platforms.

# Contents
- [1 Project Scope](#1-project-scope)
	* [1.1 Problem statement](#'1.1'-problem-statement)
	* [1.2 Use Case](#'1.2-use-case')
		+ [1.2.1 Case Example 1](#1.2.1-case-example-1)
		+ [1.2.1 Case Example 2](#1.2.2-use-case)
		 

- [2 Requirement Analysis](#2-requirement-analysis)
	* [2.1 Hardware Requirements](#"2.1"-hardware-requirements)
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
		- Input Voltage: 7-12 V
		- 5 PWM I/O Pins
		- DC Current per I/O Pin: 20mA
		- Dimensions (L x W): 68.6 x 53.4 mm
- Sensing Functions
	- Obstacle Avoidance Sensor Module
	- SW-420 Vibration Sensor Module [4]
	- Microphone Module
- Communication
	- Communications chipset on the Arduino UNO WiFi Rev.2 can be both a BLE and Bluetooth® client and host device.
	- able to connect it to a WiFi network, using its secure ECC608 crypto chip accelerator [5].
- Interface & GUI
	- Blynk Application Dashboard
	- Mobile Device Notification Tray (Android or IOS)
- System Power
	- 9V DC Battery
	- Battery Holder w/ Toggle ON/OFF Switch

## 3 Design and Implementation
### 3.1 Prototype Design Model
The general way the system works is illustrated in Figure 4. This simplified model shows that the
system detects the mail, sends this information through a cloud server, and is received by the
user’s mobile device which is also connected to the cloud server.
The use of a cloud server to send and receive sensor data in this case give the ability for the user
to access the device from anywhere as long as they have a stable internet connection. This
consequently allows this system to function from anywhere in the world and means that it is
incredibly well suited to the describe “Case 2”, where the user is not in proximity of the mail and
needs an indication of whether or not the mail has been received.
The Mail Notifying device is not shown in Figure 4 since it is added onto the structure of the
mailbox. The reason behind the in-built structure is that the sensors used to detect the mail/parcel
need to be close to the delivered mail in order to detect it, since they primarily are sensing the
immediate environment of the mailbox for changes.
The notification received can be in the form of a push notification or an email of the users chosen
service. Although email can be used, the option of using a push notification is a modern approach
to being notified and also has the advantage of being local and faster relative to an email
notification.

![](https://github.com/chunkus/IOT-Mail-Notifier/blob/main/Figures/Figure%204.png)

The method of approach used for the design of this prototype module is to use the three main
sensors to poll the environment for any changes that would occur. The environment in this case
is the immediate surrounding area of the mailbox. The sensors work in tandem in verifying that
there is a change through comparisons made by the microcontroller as illustrated by Figure 5.
The outputs of the sensors are physically shown through LED’s which there are one of for each
sensor and will either toggle ON or OFF depending on whether or not the senor senses a
change ibn the environment.
The cloud server that would be used would be a Blynk cloud server which would receive the
output sensor data sent via WIFI of the microcontroller, and display the outputs using the Blynk
mobile application. Blynk’s mobile app would also have the ability to send a notification to the
user’s device in the form of a push notification or email via their API and provided libraries.

![](https://github.com/chunkus/IOT-Mail-Notifier/blob/main/Figures/Figure%205.png)

The reason a Blynk cloud server was use, is since Blynk provides an open-source IOT stack [6]
that is relatively well supported, has a dedicated mobile application, and is simple and quick to
set up for system prototyping. The Blynk API for integrating their cloud server to their mobile
application and with the Arduino platform is intuitive and simple to use.

### 3.2 Implementation
Figure 6 shows the design architecture of the prototype Mail Notifier with the connections and the
sensors all illustrated alongside the breadboard, sensors, and Arduino Uno WIFI Rev 2
microcontroller which connects to the Blynk cloud via its WIFI capabilities.
The Arduino Uno microcontroller is powered by a 9V battery through the DC input port on the
PCB, which allows it to power the sensor and LED on the breadboard through the 5V port on the
board. Each sensor has their digital outputs connected to their corresponding digital out port of
the Arduino as shown in the diagram. So, the Vibration Sensor is connected to port D7, the
obstacle avoidance sensor is connected to pot D4, and the Microphone Module is connected to
port D8. The pinout for the LEDs associated with each sensor also are connected to a digital port,
however in the case of the LED’s, they are configured for input to the LED. Figure 6a provides a
clearer view of the pinout. Each sensor can draw up to 20-25mA from the pins as per the Arduino’s
datasheet, and for the use of this prototype is sufficient.

### 3.3 Debugging
This section shows the method used to debug the system. Using the serial monitor configured to
a data rate of 9600 Baud, the outputs and the timestamps could be printed and observed for
debugging and verification.
Figure 8 illustrates how the serial monitor would display the output of the sensors when nothing
had been detected for each sensor. It however shows two occasions when the sound had been
detected by displaying a message that had been programmed.

![](https://github.com/chunkus/IOT-Mail-Notifier/blob/main/Figures/Figure%208.png)


Figure 9 illustrates the output of the serial monitor when all the sensors had detected a change,
and consequently sent the notification message to the cloud server. During the testing, it was
helpful to know when the message had been successfully sent and at what point as to verify that
the sensors where working, and that a connection to the server had been established.

![](https://github.com/chunkus/IOT-Mail-Notifier/blob/main/Figures/Figure%209.png)

### 3.4 Blynk Dashboard Configuration
The Blynk app allows the sensor data to be monitored through the use of a virtual display, and
also has the functionality of allowing the use to choose their desired method of receiving the notification as illustrated in Figure 10 with the addition of also being able to customize how the
notification is pushed to the device.

![](https://github.com/chunkus/IOT-Mail-Notifier/blob/main/Figures/Figure%2010.jpg)

Figure 11 illustrated the way in which the push notification is received by the user on an Android
device, and shows the message that is seen from both the dedicated Blynk app, and from the
notification drop down menu of their phone. As an inherent feature of the android drop down
menu, the time at which the notification was received can also be viewed, which is useful in the
case of a mail notifying device since it allows the user to know when their mail got delivered.

![](https://github.com/chunkus/IOT-Mail-Notifier/blob/main/Figures/Figure%2011.png)

### 3.5 Analysis and Design Issues
The design functions as intended however, there are some issues that were experienced during
the testing. The accuracy of the sensors used could cause multiple false alarms with the output,
and meant as a result that the readings could have been wrong. This was especially true for the
vibration sensor since it was extremely sensitive to any kind of movement. The obstacle
avoidance sensor module was accurate enough hand did not have any issues with false alarms.
As a countermeasure to these inaccuracies, each measure was checked against one another
before the notification was sent.
One other issue with the design implementation, was the bulky size of the prototype. Since the
device was to be placed onto a mailbox, the size limited the places that it could be mounted,
which meant that it had to be placed in awkward positions where the wires did not allow a clear
view of the debugging LEDs
Another issue that was had during the testing of the system was the reliance on a stable internet
connection in order to upload the sensor data to the Blynk cloud server via WIFI.
The WIFI chip of the Arduino Uno WIFI Rev 2 did not reach far enough to the router to have a
stable enough connection to the server, which meant that at times the connection would cut out
and notification would not be able to be sent. This could be solved by using a dedicated WIFI
module with a further range of detection.


## 4 Conclusion
IOT technology can be used to connect the devices we use through the use of the internet and,
reveal an opportunity for new solutions to give people immediate updates on aspects of their life
that they would otherwise not be able to access quickly such as mail.
The Mail Notifier prototype provides an example of how IOT technology can be used to create a
solution to a modern problem (in this case caused by a pandemic) as well as how these
technologies can be integrated with existing technology such as smartphones. It also shows how
older less technologically advanced systems and appliances such as a simple mailbox can be
upgraded or more modernized using low-cost platforms, as long as there is a stable internet
connection available.
