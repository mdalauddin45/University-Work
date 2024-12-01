.MODEL SMALL
.STACK 100H

.DATA
    msg DB 'You pressed: $'  ; Message to display

.CODE
MAIN PROC
    ; Initialize the data segment
    MOV AX, @DATA
    MOV DS, AX
    
    ; Display the message
    LEA DX, msg      ; Load the address of the message into DX
    MOV AH, 09H      ; DOS function to display a string
    INT 21H          ; Call DOS interrupt
    
    ; Read a character from the keyboard
    MOV AH, 01H      ; DOS function to read a character from the keyboard
    INT 21H          ; Call DOS interrupt
    
    ; Echo the character back to the screen
    MOV DL, AL       ; Move the character read into DL (for output)
    MOV AH, 02H      ; DOS function to display a character
    INT 21H          ; Call DOS interrupt

    ; Terminate the program
    MOV AH, 4CH      ; DOS function to exit
    INT 21H          ; Call DOS interrupt

MAIN ENDP

END MAIN
