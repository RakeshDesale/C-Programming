# Problem Statement:

"Secure Assets Private Ltd", a small company that deals with lockers has recently started manufacturing digital locks which can be locked and unlocked using PINs (passwords). You have been asked to work on the module that is expected to generate PINs using three input numbers.

The three given input numbers will always consist of three digits each i.e. each of them will be in the range >=100 and <=999.

Bellow are the rules for generating the PIN.

1. The PIN should made up of 4 digits.

2. The unit (ones) position of the PIN should be the least of the units position of the three numbers.

3. The tens position of the PIN should be the least of the tens position of the three input numbers.

4. The hundreds position of the PIN should be least of the hundreds position of the three numbers.

5. The thousands position of the PIN should be the max of all digits in the three input numbers.

### Input Format

three numbers

### Constraints

all the numbers must be in the range of >=100 and <=999

### Output Format

PIN value

### Sample Input 0
```
123
582
175
```
### Sample Output 0
```
8122
```
### Sample Input 1
```
190
267
853
```
### Sample Output 1
```
9150
```
### Sample Input 2
```
123
456
789
```
### Sample Output 2
```
9123
```
