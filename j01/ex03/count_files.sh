find . -samefile . -or -type d -or -type f | wc -l | rev | cut -d ' ' -f 1 | rev