# Reverse Snake

## What is Reverse Snake?

This game has the same logic idea with the original Snake game. There are some similiarities such as The Snake and The Food. There also some similiarities in game features such as snake is lost when it eats itself and snake is gaining body length when it eats foods. But there is a main feature that We chage in this game. Instead of playing as a snake, We play this game as a food. So that how this game called Reverse Snake?

## How to Play

  1. We play as a food, not snake. So We need to tap a food position to spawn a food.
  2. The snake is moving itself to the direction of the food.
  3. We will won if We could make the snake eat itself.
  4. We will lose if We run out of food, but the snake does not eat itself.
  
## How is this game developed

We use Unity Engine to build the main game. We use C# programming language to develop the logic of the game. When it comes to map design, snake designs, etc, We use <a href="https://canva.com">Canva</a> and some free sprites on the internet.

## Snake Moving Logic

We use Greedy-Best First Search Algorithm to automatically move the snake one movement per frame. We also use diagonal-line value to calculate the heuristic function of each grid.
