# Valentin Macé
# valentin.mace@kedgebs.com
# Developed for fun
# Feel free to use this code as you wish as long as you quote me as author

"""
main.py
~~~~~~~~~~

Main file for this project

Here I provide some examples for you to run easily,
you just need ton uncomment the part you want and comment what you don't want,
each part is independent of others
"""

from game import *
from genetic_algorithm import *

net = NeuralNetwork()
game = Game()


def best_demo():
    net.load(filename_weights="gen_data/gen_86_weights.npy", filename_biases="gen_data/gen_86_biases.npy")
    game.start(display=True, neural_net=net)

def play():
    game = Game()
    game.start(playable=True, display=True, speed=10)


def train(pops, gens):
    gen = GeneticAlgorithm(population_size=pops, generation_number=gens, crossover_method='neuron',
                           mutation_method='weight')
    gen.start()

# gen = GeneticAlgorithm(population_size=1000, generation_number=100, crossover_method='neuron', mutation_method='weight')
# gen.start()
