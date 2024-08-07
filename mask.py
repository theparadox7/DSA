import tkinter as tk

def show_password():
    password = entry.get()
    print("Password entered successfully")

def main():
    root = tk.Tk()
    root.title("Password Input")

    label = tk.Label(root, text="Enter your password:")
    label.pack(pady=5)

    # Create an entry widget for the password with show='*' to mask the input
    entry = tk.Entry(root, show='*', width=30)
    entry.pack(pady=5)

    submit_button = tk.Button(root, text="Submit", command=show_password)
    submit_button.pack(pady=10)

    root.mainloop()

if __name__ == "__main__":
    main()
