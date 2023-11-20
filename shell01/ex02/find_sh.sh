find . -type f -name '*.sh' -exec basename {} .sh \;

: '
find .: Starts the search in the current directory (.).
-type f: Specifies that the search is for files.
-name '*.sh': Matches files with names ending in .sh.
-exec basename {} .sh \;: Executes the basename command for each found file, stripping the .sh extension from the file names.

'
