# Nimbus_Project_Kshitij_mishra_Project_93

Password Strength Checker
This project is a modular C program that checks whether a password is strong or weak.
It also gives helpful suggestions for improving weak passwords and logs the results into a file.
This project is divided among 4 group members, each handling a separate module to show equal contribution.

Features-
Reads password input from the user
Checks for:
Minimum length (8 characters)
Uppercase letters
Lowercase letters
Numbers
Special characters
Prints suggestions if password is weak
Logs password & result to a file
Modular code with separate .c and .h files

Project Structure
Final_Project/
│
├── main.c
│
├── input_handler.c
├── input_handler.h
│
├── password_checker.c
├── password_checker.h
│
├── file_logger.c
├── file_logger.h
│
└── password_log.txt

👥 Group Member Contribution
Member	Module	Files
Deepak Sharma-Input Handling(input_handler.c, input_handler.h)
Kshitij Mishra-Password Checking Logic(password_checker.c, password_checker.h)
Pravar Singh-(File Logging	file_logger.c, file_logger.h)
Yash-Main Program Flow and debugging(main.c)

How to Compile-
Open terminal inside the Final_Project folder and run:
gcc main.c input_handler.c password_checker.c file_logger.c -o password_checker
If successful, it creates:
password_checker.exe

How to Run (Windows)
In the same folder:
./password_checker.exe


How the Program Works
 1.Password Input
User enters a password — handled by readPassword().

2.Password Checking
Checks:
Length ≥ 8
Has uppercase
Has lowercase
Contains a digit
Contains a special character
If any condition is missing, suggestions are printed.

3.Logging
The password and its result (STRONG/WEAK) are saved in password_log.txt.

Example Output
For strong password:
Enter password: Hello@123
The password is STRONG

For weak password:
Enter password: hello
The password is WEAK
Suggestions:
- Add uppercase letters
- Add numbers
- Add special characters
- Increase length to at least 8 characters

License
This project is for educational and academic use.
