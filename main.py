import tkinter as tk

def choose_path(path):
    if path == 1:
        # Handle path 1
        print("Path 1 chosen")
    elif path == 2:
        # Handle path 2
        print("Path 2 chosen")
    elif path == 3:
        # Handle path 3
        print("Path 3 chosen")

# Create the main application window
root = tk.Tk()
root.title("Advanced Application")

# Function to create a box with specified path
def create_box(path):
    box = tk.Button(root, text=f"Path {path}", width=20, height=5, command=lambda: choose_path(path))
    box.grid(row=path, column=0, padx=10, pady=10)

# Create three boxes for each path
for i in range(1, 4):
    create_box(i)

root.mainloop()

