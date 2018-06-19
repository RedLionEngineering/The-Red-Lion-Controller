# The Red Lion Controller

## Preamble

This Repository contains all the files belonging to the Red Lion Controller. 
The Red Lion Controller is an open source hardware project. I believe in the spirit of the OSHW movement and that it helps us all make our products better, more efficiently and more affordably. 

If you don't know what Open Source Hardware means, check out these videos, that explains it fairly well.  
What is OSHW: https://www.youtube.com/watch?v=I0HOgcbtmws   
Rules of the OSHW community: https://www.youtube.com/watch?v=NOUaoLjrNPo 

If you can't be bothered, here are the Basics in a Nutshell:
1) The Designer (me) releases all his design files to the open public, on an forum like this.
2) The Users (you) are granted access to the files, so they can repair it, modify it and improve it. 
3) You are free to release your modified version of my product. 
4) If you base your design on another person's work, it is good courtesy to give them a shoutout in your documentation/code. 
5) Products based on an OSHW design should also be OSHW products. Releasing it under private license is not accepted. 
6) A design based on another is fair game, however a complete copy is, while not illegal, highly frowned upon.  

Which sums up the basic spirit of the Open Source Hardware Community: Be nice to the others, and they will be nice to you.  
  
(Disclaimer: If you know about OSHW, this was not for you. I would never assume *you* don't know this. These products are targeted to a community that traditionnally responds not very well to the open source spirit. So don't get mad, this was never meant for you; because we both know you know, but other people don't.)

## Introduction

The Red Lion Controllers are a family of advanced feature, positive control, negative common, transistor operated slotcar controllers. They are meant for advanced drivers and large scale tracks. They provide better control and more options and settings than the classic resitive controllers.  
All Red Lion Controllers feature exchangeable resistor cards and the signature Touch Brake feature. The Touch Brake is an relay-activated brake circuit that operates separately from the control circuit to provide an immediate reaction to the slightest trigger input.  
The Red Lion Pro is wired for three-wire tracks following the Parma International Standard.  
There is currently 1 version of the Red Lion available, with more to come in the future.  
#### The Red Lion Pro Controller  
The original version of the Red Lion family and the Flagship of the line. This is the full-featured model, coming with 14 resistor cards, adjustable brake with a full brake switch and adjustable sensitivity with two stages of reduction available. It features a handbrake on the handle, an optional temperature sensor for the power transistor and a voltage readout, as well as 6 status LEDs and.  
The Red Lion Pro features a three line input protection as well as the signature Touch Brake.  
#### The Red Lion Standard Controller  
The Red Lion Standard is the core model of the Red Lion range, with the full specs of the Red Lion Pro model, but on a smaller footprint and with a reduced featureset. Leaving out the Handbrake and the Reduction features makes this version compatible with limiting regulations, while still retaining the capability of the Pro model. 
#### The Red Lion Light Controller
The smallest version of the Red Lion Controllers, The Red Lion Light Controller, provides sensitivity and brake adjustment, as well as the exchangeable resistor cards. Due to form factor limitations, the current handling capability is reduced compared to the bigger versions; in addition to that, it does not have a voltage readout. The PCB's are designed to fit the entire controller into the handpiece. The Red Lion Light is geared more towards beginners and amateurs, wanting to upgrade their rig.  

## Schematic Files

The folder "Schematic Files" contains all the schematics of the most recent version as Altium 16 files. In addition to that, all the previous versions a pdf file is available. 

## PCB Files

The folder "PCB Files" contains all the required PCB files of the most recent version. In addition, a version history of the more important boards can also be found in the specific folder.  
I design my boards with Altium 16. Eagle files, as well as for Open Source Programs such as KiCAD, are not available.  

## Gerber Files

The folder "Gerber Files" contains files to all the PCBs, exported in the standardised Gerber file format. Those files are accepted by most PCB manufacturers around the world. If you have a board failure and desire to get a replacement manufactured yourself, these are the files you have to send in. Do pay attention to get the correct version.  
**Note:** Be advised that not every version of the boards is exported as Gerber file. If you cannot find your board, you may have to      download the PCB file and export it yourself. Note also that many PCB manufacturers will accept Altium Files.  
However, be advised that **a)** most manufacturers require a minimum quantity to be ordered and **b)** I will usually have a surplus board available to ship to you.  
Some manufacturing notices:
* The PCBs are currently manufactured by [PCBWay](https://www.pcbway.com/) (not an endorsement)
* All boards are of standard 1.6mm thickness
* The soldermask is always red, except for the top panel, which has matte black soldermask
* The silkscreen is white and single-sided on all boards
* All the boards are double layer boards, except for the copperless boards
* All boards have an immersion gold finish, except for the wiper board, which must be hard gold plated
* All boards are 1oz/35u copper thickness, except for the control brick, which must have at least 2oz/70u copper thickness

## Code Files

The folder "Code Files" contains all the code files for the different logic boards and microcontrollers. The microcontroller may loose the program for different reasons or show incrrect behaviour. In this case it gets necessary to reflash your microcontroller.  
The code files are written in C++ using the Arduino IDE and the Arduino headers, and the code is programmed with the [ATtinyCore by Spence Konde](github.com/SpenceKonde/ATTinyCore).  
To reflash your microcontroller, you will need an Atmel type ISP programmer of some description.  
Open the file in your Arduino IDE, set up your programmer and connect your logic board. **Watch the pinout.**  
Select "Upload using programmer". If you still experience problems, try to reset the fuses. Read how in the instructions of Spence Konde's Core. The fuse settings are described in the comment before the code. **Make sure you get the correct code version for your board.**  

## Random Notes (the fine print)

Some random facts you should consider:
* Although this is an Open Source Project, this does not apply to every aspect of the project:
    * The **Grand Duchial Crown Logo** ("Made in Luxembourg") is protected by Luxembourgish legislation and may only be on products made in Luxembourg. 
    * The **Gear Logo** is the Logo of the Open Source Hardware movement and should not be present on Private Source Hardware. 
    * The **Lion Head Logo** is technically not copyrighted, but I use it on all my projects as well as on many internet platforms. Please don't use it. 
* The **Bill of Materials** applies to the current state of design and might not fit in with your version. If you have an older version, you have to refer to the **part spec**, but there will be no part numbers in those.  
You will have to select appropriate parts at your discretion. 
