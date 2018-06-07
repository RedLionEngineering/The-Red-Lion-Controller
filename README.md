# The-Red-Lion-Pro-Controller

## Preamble

This Repository contains all the files belonging to the Red Lion Pro Controller. 
The Red Lion Pro is an open source hardware project. I believe in the spirit of the OSHW movement and that it helps us all make our products better, more efficiently and more affordably. 

If you don't know what Open Source Hardware means, check out these videos, that explains it fairly well.  
What is OSHW: https://www.youtube.com/watch?v=I0HOgcbtmws   
Rules of the OSHW community: https://www.youtube.com/watch?v=NOUaoLjrNPo 

If you can't be bothered, here are the Basics in a Nutshell:
1) The Designer (me) releases all his design files to the open public, on an forum like this.
2) The Users (you) are granted access to the files, so they can repair it, modify it and improve it. 
3) You are free to release your modified version of my product. 
4) If you base your design on another person's work, it is good courtesy to give them a shoutout in your documentation/code. 
5) Products based on an OSHW design should also be OSHW products. Releasing it under commercial license is not ok. 
6) A design based on another is fair game, however a complete copy is, while not illegal, highly frowned upon. 
Which sums up the basic spirit of the Open Source Hardware Community: Be nice to the others, and they will be nice to you. 

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
* Although this is an Open Source Project, 
