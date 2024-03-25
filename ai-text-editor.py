import tkinter as tk
import keyboard

def on_key_event(event):
    print('Key:', event.name)

def main():
    # Create a Tkinter window
    root = tk.Tk()
    root.title("Tkinter with Keyboard")

    # Create a label
    label = tk.Label(root, text="Press 'Esc' to exit")
    label.pack()

    # Bind the keyboard event
    keyboard.on_press(on_key_event)

    # Keep the Tkinter application running until 'Esc' is pressed
    keyboard.wait('esc')

    # Destroy the Tkinter window when 'Esc' is pressed
    root.destroy()

if __name__ == "__main__":
    main()
