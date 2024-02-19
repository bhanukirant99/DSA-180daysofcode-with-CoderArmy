def extract_gif_filenames(input_filename):
    gif_filenames = set()

    with open(input_filename, 'r') as file:
        for line in file:
            if "GET" in line and "200" in line:
                # Extracting the GIF filename from the line
                start_index = line.find(".gif") - 1
                end_index = line.rfind("/", 0, start_index) + 1
                gif_filename = line[end_index:start_index + 4]
                gif_filenames.add(gif_filename)

    return gif_filenames

def write_to_output_file(output_filename, gif_filenames):
    with open(output_filename, 'w') as file:
        for filename in gif_filenames:
            file.write(filename + "\n")

def process_log_file(input_filename):
    output_filename = "gifs_" + input_filename.replace(".", "_")
    gif_filenames = extract_gif_filenames(input_filename)
    write_to_output_file(output_filename, gif_filenames)

# Example usage
filename = input()
process_log_file(filename)