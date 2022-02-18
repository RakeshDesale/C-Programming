# Problem Statement:

You are given a string representing an attendance record for a student. The record only contains the following three characters: 'A' : Absent. 'L' : Late. 'P' : Present.<br>
A student could be rewarded if his attendance record doesn't contain more than one 'A' (absent) or more than two continuous 'L' (late).

You need to return whether the student could be rewarded according to his attendance record.

### Input Format

a string from the user

### Constraints

non empty string

### Output Format

Yes or No

### Sample Input 0
```
PPALLP
```
### Sample Output 0
```
Yes
```
### Sample Input 1
```
PPALLL
```
### Sample Output 1
```
No
```
### Sample Input 2
```
PPP
```
### Sample Output 2
```
Yes
```
