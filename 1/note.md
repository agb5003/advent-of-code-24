# Advent of Code 2024 Day 1: Historian Hysteria

- Looking for the Chief Historian.
- The historian has to be in the first 50 places (marked with stars)
- Get 50 stars before december 25th
- Two puzzles are available each day, each puzzle grants one star

## Actual Day 1 problem:

- An `input` file is given containing location IDs in two lists. Each row contains the location ID in the first list, three spaces, and then the location ID in the second list.
- Pair up the smallest number in the left list with the smallest number in the right list, and so on.
- Within each pair, get the difference between the two locations.
- Add up all these distances for the answer of the puzzle.

## Plan

- Test out cpp file I/O
- Create file parser to input data from the file
    - std::ifstream for input file streams
    - std::ofstream for output file streams
    - std::fstream for input/output file streams.
    - they are stream objects, and should be constructed with passing a string of the name of the file in the curly brackets as the argument.
    - input to a string, line by line
    - parse the string using the 3-space delimiter
- store in array
- sort array
- another pass for getting differences and adding them
- result is obtained
