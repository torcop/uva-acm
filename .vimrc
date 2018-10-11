    " .vimrc - where you can customize your Vim experience
    " This is a very minimal example that shows how to compile and run a 
    " single Java test file from you Vim session 
    " A quick explaination:
    "    map: map statements tell Vim to associated certain key strokes with
    "         actions. 
    "    <leader>jc (leader is usually just a comma, but you can
    "         define it as you like) now maps to command :!javac %<CR>
    "    :!javac %<CR>     
    "         '!' gets you into the system command line, 
    "         'javac' is the standard Java compiler, 
    "         '%' is the current filename (Test.java)
    "         ':r' gets the filename without the extension (in the second line)
    "         '<CR>' tells Vim to go ahead and enter the command (carriage return) 
    map <leader>jc :!javac %<CR> 
    map <leader>jj :!java %:r<CR>
