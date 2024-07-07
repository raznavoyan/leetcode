#!/bin/bash

# GitHub credentials (replace with your actual username and token)
username="raznavoyan"
token=""

while true; do
    # Prompt for the number
    read -p "Enter number (or type 'exit' to quit): " number
    if [ "$number" == "exit" ]; then
        echo "Exiting..."

        # Git operations
        git add .
        git commit -m "Committing changes for number $number"
        
        # Push changes to the repository
        git push https://$username:$token@github.com/$username/leetcode.git

        break
    fi

    # Create the folder with the number name
    mkdir -p "$number"

    # Create the file named number.cpp inside the folder
    file_path="$number/$number.cpp"

    # Prompt for the text
    echo "Enter text (end input with Ctrl+D):"

    # Read the text input (multiple lines)
    text=$(</dev/stdin)

    # Write the text into the file
    echo "$text" > "$file_path"

    echo "Folder and file created successfully: $file_path"
done
