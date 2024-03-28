import tkinter as tk

def show_thank_you(path):
    # Function to display the "thank you" message for the chosen path
    message = f"Thank you for choosing Path {path}"
    # Clear the existing content in the frame
    for widget in frame.winfo_children():
        widget.destroy()
    # Display the "thank you" message
    label = tk.Label(frame, text=message)
    label.pack(padx=20, pady=20)

def choose_path(path):
    # Function to handle path selection
    show_thank_you(path)

# Create the main application window
root = tk.Tk()
root.title("Advanced Application")

# Create a frame to contain the message
frame = tk.Frame(root)
frame.grid(row=0, column=1, padx=20, pady=20)

# Function to create a box with specified path
def create_box(path):
    box = tk.Button(root, text=f"Path {path}", width=20, height=5, command=lambda: choose_path(path))
    box.grid(row=path, column=0, padx=10, pady=10)

# Create three boxes for each path
for i in range(1, 4):
    create_box(i)

root.mainloop()
