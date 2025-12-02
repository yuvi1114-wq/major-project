# About

Supposedly, Caesar (yes, that Caesar) used to “encrypt” (i.e., conceal in a reversible way) confidential messages by shifting each letter therein by some number of places. For instance, he might write A as B, B as C, C as D, …, and, wrapping around alphabetically, Z as A. And so, to say HELLO to someone, Caesar might write IFMMP instead. Upon receiving such messages from Caesar, recipients would have to “decrypt” them by shifting letters in the opposite direction by the same number of places.

The secrecy of this “cryptosystem” relied on only Caesar and the recipients knowing a secret, the number of places by which Caesar had shifted his letters (e.g., 1). Not particularly secure by modern standards, but, hey, if you’re perhaps the first in the world to do it, pretty secure!

Unencrypted text is generally called plaintext. Encrypted text is generally called ciphertext. And the secret used is called a key.


This program uses the same concept, through character manipulation it is able to shift each and every character by a certain 'key', all in accordance to the user.


# Instructions:

As a user, you would first run the code while adding the key in the command line itself. Instead of just './caesar', iy'd be './caesar 2' or any positive numerical number. Proceeding which, you'd input the statement you'd like to encrypt (plaintext) and viola! You have recieved the encrypted text (ciphertext) as output, in the way indicated by your 'key'.
