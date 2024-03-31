#!/bin/bash

display_calendar() {
    cal
}

display_date_time() {
    date
}

display_logged_in_users() {
    who
}

display_name_position() {
    read -p "Enter your name: " name
    read -p "Enter x position: " x
    read -p "Enter y position: " y
    tput cup $x $y
    echo $name
}

display_terminal_number() {
    echo "Your terminal number is: $$"
}

while true; do
    clear
    echo "MENU"
    echo "1. Display calendar of current month"
    echo "2. Display today’s date and time"
    echo "3. Display usernames those are currently logged in the system"
    echo "4. Display your name at given x, y position"
    echo "5. Display your terminal number"
    echo "6. Exit"

    read -p "Enter your choice: " choice

    case $choice in
        1) display_calendar ;;
        2) display_date_time ;;
        3) display_logged_in_users ;;
        4) display_name_position ;;
        5) display_terminal_number ;;
        6) echo "Exiting..."; break ;;
        *) echo "Invalid choice. Please enter a number from 1 to 6." ;;
    esac
    
    read -n1 -r -p "Press any key to continue..."
done