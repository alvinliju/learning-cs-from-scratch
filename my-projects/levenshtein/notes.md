## Levenshtein Distance Equation

- The program works by the implemnring Levenshtein equation to see how many edits should be done to make 2 words similar.
eg: levenshtein.dist("cat", "bat") => we get `1` in return the longer the distance the more likely the words are similar.

now how to implment levinshtein implementation from scratch?

## stupid implementation studo code:
- we build a function to take two words.
- the words taken by the function compares individual strings of the words and at the end return us how many edits are required.

* The above implementation is the most stupid and basic from my understanding but if we want to go deeper down the rabbit hole we can implement Levenshtein algorithm 