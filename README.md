# alien_battle_simulation

My first C++ project using OOP.

- Part 1 implements Boov
- Part 2 implements Gorg
- Part 3 refactor to add inheritance to project

## YouTube links (Bradley Sward)
[
C++ Object Oriented Programming Example Project (Part 1 of 3)]([https://www.google.com](https://www.youtube.com/watch?v=zt2Eju3basU))
[
C++ Object Oriented Programming Example Project (Part 2 of 3)]([https://www.google.com](https://www.youtube.com/watch?v=6MzV3EaIKpQ))
[
C++ Object Oriented Programming Example Project (Part 3 of 3)]([https://www.google.com](https://www.youtube.com/watch?v=IBxsY6QlqSQ))

## Backstory
The Gorg can no longer be reasoned with! 
Negotiations cannot go well if you have no idea what the other side wants! 
They are so strong and vicious that ignoring them only means Earth is in danger.

The Boov are friends of all peoples across the galaxy. 
These creaters want nothing more than peace and harmony.

Captain Smek will need to simulate a Gorg v Boov battle many times to see what their odds of victory would be.

## Boov Class Requirements (Pt 1)
We can only affort to give a Boov 13 shield units for battle. 

What is the minimum number of health points a Boov needs to survive 12 rounds of battle on average?

- private string member var for name (dach can have different name, no default)
- private int member var for health (each can have different value, no default)
- private int member var for shield (each can have different value, no default)
- public constructor which initializes all three member vars
- public getter for name
- public getter for health value
- public getter for shield value
- public boolean function `isDefeated()` (Boov is defeated when `health <= 0`)
- public void function `GetsAttacked()` (probabilities related to shield and health damages)

## Gorg Class Requirements (Pt 2)
- private string member var for name (every Gorg named George)
- private int member var for health (every Gorg has 30)
- private int member var for shield (every has 5 points and max 5 points)
- public constructor
- public getter for name
- public getter for health value
- public getter for shield value
- public boolean IsDefeated()
- public void function GetsAttacked() (probabilities related to shield and health damages)

## Refactoring (Pt 3)
- refactor to use inheritance and polymorphism
- base class will be called Competitor
Hints:
- shared member variables should move into base class
- functions with same behavior should move to base class
- function with same name but different behavior is a place to create a virtual function in base class
- `GetsAttacked()` is a great example of a virtual function



