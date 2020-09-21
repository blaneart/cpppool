#! /bin/bash

function check_exit_status {
	if [ $? -eq $1 ]
	then
		printf "\033[1;32m ✓ PASS\033[0m\n"
	else
		printf "\033[0;31mFAIL\033[0m\n"
	fi
}

function check_file_contents {
	if [ $? -eq 0 ]
	then
		DIFF=$(diff $1 $2)
		if [ "$DIFF" == "" ]
		then
			printf "\033[1;32m ✓ PASS\033[0m\n"
			return
		fi
	fi
	printf "\033[0;31mFAIL\033[0m\n"
}
# No arguments
echo "Test 1 — no arguments"

../replace

check_exit_status 1

# Test 2
echo "Test 2 — only one argument"

../replace /dev/null

check_exit_status 1

# Test 3
echo "Test 3 — two arguments"

../replace /dev/null "string"

check_exit_status 1

# Test 4
echo "Test 4 — nonvalid infile"

../replace ./donttouchme "string" "tring"

check_exit_status 1

echo Test 5 — Changing "a" to "b"

../replace ./test_input1.txt "a" "b"

check_file_contents test_input1.txt.replace test_output1.txt

echo "Test 6 — replace one letter"

../replace test05_input.txt "e" "a"

check_file_contents test05_input.txt.replace test05_output.txt

echo "Test 7 — Replace x by xy"

../replace test07_input.txt "drive" "overdrive"

check_file_contents test07_input.txt.replace test07_output.txt
