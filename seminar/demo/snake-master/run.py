import argparse
import main as M

def get_args():
    parser = argparse.ArgumentParser("parameters")
    parser.add_argument("--mode", type=str, default="demo", help="(example: demo, train,play), (default: demo)")
    parser.add_argument("--pops", type=int, default="500", help="(number of population size), (default: 500)")
    parser.add_argument("--gens", type=int, default="100", help="(number of generation size), (default: 100)")
    args = parser.parse_args()
    return args


def main():
    args = get_args()
    if args.mode == "demo":
        print('running best model for demonstration...')
        M.best_demo()
    if args.mode == "train":
        print('training model...')
        M.train(args.pops,args.gens)
    if args.mode == "play":
        print('play model...')
        M.play()



if __name__ == "__main__":
    main()
