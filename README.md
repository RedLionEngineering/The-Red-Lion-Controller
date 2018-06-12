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

## Introduction

The Red Lion Controllers are a family of advanced feature, positive control, negative common, transistor operated slotcar controllers. They are meant for advanced drivers and large scale tracks. They provide better control and more options and settings than the classic resitive controllers.  
All Red Lion Controllers feature exchangeable resistor cards and the signature Touch Brake feature. The Touch Brake is an relay-activated brake circuit that operates separately from the control circuit to provide an immediate reaction to the slightest trigger input.  
The Red Lion Pro is wired for three-wire tracks following the Parma International Standard.  
There is currently 1 version of the Red Lion available, with more to come in the future.  
#### The Red Lion Pro Controller  
The original version of the Red Lion family and the Flagship of the line. This is the full-featured model, coming with 14 resistor cards, adjustable brake with a full brake switch and adjustable sensitivity with two stages of reduction available. It features a handbrake on the handle, an optional temperature sensor for the power transistor and a voltage readout, as well as 6 status LEDs and.  
The Red Lion Pro features a three line input protection as well as the signature Touch Brake.  
#### The Red Lion Light Controller
The smallest version of the Red Lion Controllers, The Red Lion Light Controller, provides sensitivity and brake adjustment, as well as the exchangeable resistor cards. 

## Gerber Files

The folder "Gerber Files" contains files to all the PCBs, exported in the standardised Gerber file format. Those files are accepted by most PCB manufacturers around the world. If you have a board failure and desire to get a replacement manufactured yourself, these are the files you have to send in. Do pay attention to get the correct version.  
However, be advised that **a)** most manufacturers require a minimum quantity to be ordered and **b)** I will usually have a surplus board available to ship to you.  
Some manufacturing notices:
* The PCBs are currently manufactured by [PCBWay](https://www.pcbway.com/) (not an endorsement)
* All boards are of standard 1.6mm thickness
* The soldermask is always red, except for the top panel, which has matte black soldermask
* The silkscreen is white and single-sided on all boards
* All the boards are double layer boards, except for the copperless boards
* All boards have an immersion gold finish, except for the wiper board, which must be hard gold plated
* All boards are 1oz/35u copper thickness, except for the control brick, which must have at least 2oz/70u copper thickness

## PCB Files

The folder "PCB Files" contains all the required PCB files of the most recent version. In addition, a version history of the more important boards can also be found in the specific folder.  
I design my boards with Altium 16. Eagle files, as well as for Open Source Programs such as KiCAD, are not available. 

## Random Notes (the fine print)

Some random facts you should consider:
* Although this is an Open Source Project, this does not apply to every aspect of the project:
    * The **Grand Duchial Crown Logo** ("Made in Luxembourg") is protected by Luxembourgish legislation and may only be on products made in Luxembourg. 
    * The **Gear Logo** is the Logo of the Open Source Hardware movement and should not be present on Private Source Hardware. 
    * The **Lion Head Logo** is technically not copyrighted, but I use it on all my projects as well as on many internet platforms. Please don't use it. 
* The **Bill of Materials** applies to the current state of design and might not fit in with your version. If you have an older version, you have to refer to the **part spec**, but there will be no part numbers in those.  
You will have to select appropriate parts at your discretion. 
