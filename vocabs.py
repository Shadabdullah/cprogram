import csv

# Function to read CSV and prepare data
def prepare_data(csv_file, output_file):
    # Open the CSV file
    with open(csv_file, 'r', newline='') as file:
        reader = csv.DictReader(file)
        
        # Open a text file to write model data
        with open(output_file, 'w') as out_file:
            for row in reader:
                # Format data according to the model structure
                line = f'Vocabularies(\n'
                line += f'  urduWord: "{row["urduWord"]}",\n'
                line += f'  romanUrdu: "{row["romanUrdu"]}",\n'
                line += f'  devanagri: "{row["devanagri"]}",\n'
                line += f'  englishWord: "{row["englishWord"]}",\n'
                line += f'  hindiWord: "{row["hindiWord"]}",\n'
                line += f'  wordClass: "{row["wordClass"]}",\n'
                line += f'  origin: "{row["origin"]}",\n'
                line += f'  englishMeaning: "{row["englishMeaning"]}",\n'
                line += f'  useInTense: "{row["useInTense"]}",\n'
                line += f'),\n\n'
                
                # Write the formatted line to the output file
                out_file.write(line)

# Example usage
if __name__ == "__main__":
    csv_file = 'vocab.csv'  # Replace with your CSV file path
    output_file = 'model_data.txt'  # Output text file path
    
    prepare_data(csv_file, output_file)
    print(f"Data prepared and saved to {output_file}")
