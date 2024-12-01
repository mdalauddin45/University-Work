.MODEL SMALL
.STACK 200H

.DATA
    ; All your variables will be declared here

.CODE
    ; Code segment
MAIN PROC
    ; Your code starts here
    
    ; Example statements can be added here

    ; To terminate the program
    MOV AH, 4CH    ; Function 4Ch is used to exit the program
    INT 21H        ; Call DOS interrupt 21h
    
MAIN ENDP

END MAIN

