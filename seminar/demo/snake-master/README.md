# todo

1. pops 500
2. pops 1000
3. pops 1500
4. pops 2000

1. Dependencies
Using Python 3.6 or uper environment.
The project needs libraries: joblib,numpy,numba,pygame
2. User guide 
2.1 demonstration 
execute 'run.py' with parameter "--mode demo" will loading the 1000 population and 100generation model. 


``` shell script
 python run.py --mode demo

```

``` shell
 python run.py --mode play

```


If you prefer loading different model have to modify the path in main.py file.
-img

If training snakes please select parameter "--mode train" and need to setup population and generations as below.

``` shell
 python run.py --mode train --pops 1000 --gens 100

```
Using different fitness format have to edit in the file of snake.py.
-img

we still prvide mode of "play" for user slef play as well. 
``` shell
 python run.py --mode play

```

   





# Snake
>Neural Networks playing snake game trained by genetic algorithm

<p align="center">
  <img src="./animation.gif">
</p>

A personal project made by Robin Mancini and myself, consisting in training neural networks to play the game "Snake"

This repository contains:
- The Snake Game itself
- A Genetic Algorithm module
- A Neural Network module
- A main file with toy examples

I timed most functions to be sure to improve speed and used numba jit for compiling some functions, the genetic algorithm is parallelized for its main part (snakes evaluation) using multiprocessing and joblib


## Installation

Python 3 was used for this project and I can't promess that older versions are compatibles

Libraries you'll need to run the project:

{``joblib``, ``numpy``, ``numba``, ``pygame``}

Clone the repo using

```sh
git clone https://github.com/valentinmace/snake.git
```

## Usage

You will find some ready to run examples in ``main.py`` file.

You can try to:
- Play snake
- Train your own neural networks (it can take a while to get good results)
- Display a game played by neural networks that I trained and selected four you

Everything is explaind in the file, just uncomment parts that you want to execute, then go to terminal and do:
```sh
python main.py
```

## Notes

Do not hesitate to contact me if you need some help

Everything is made by me, I did not want to use existing framework for the genetic algorithm or neural network for learning purposes. I also coded the game with performance in mind rather than conception elegance.

I have published (or will publish depending on when you read this) a serie of youtube tutorial videos on [my channel](https://www.youtube.com/channel/UCMIW0JKxoxBDM5yiiF17SrA) (in french)


## Meta

Valentin Macé – [LinkedIn](https://www.linkedin.com/in/valentin-mac%C3%A9-310683165/) – [YouTube](https://www.youtube.com/channel/UCMIW0JKxoxBDM5yiiF17SrA) – [Twitter](https://twitter.com/ValentinMace) - valentin.mace@kedgebs.com

Distributed under the MIT license. See ``LICENSE`` for more information.
