// author = tamoghna pal





#include <stdio.h>

int main() {
    // Variables to store 3 DNA bases (a triplet codon)
    char base1, base2, base3;
    char rna1, rna2, rna3;
    float mutation_risk = 0.0;

    printf("=== BIOLOGY DEEP TECH: DNA TRANSCRIPTION TOOL ===\n\n");
    printf("Enter a 3-letter DNA sequence (Use uppercase A, T, C, G separated by spaces):\n");
    printf("Example input: A T G\n\n");
    
    // 1. Capture the biological string input
    printf("Enter sequence: ");
    scanf(" %c %c %c", &base1, &base2, &base3);

    // 2. Biological Transcription Logic
    // In RNA: A becomes U, T becomes A, C becomes G, G becomes C
    
    // Base 1 translation
    if (base1 == 'A') rna1 = 'U';
    else if (base1 == 'T') rna1 = 'A';
    else if (base1 == 'C') rna1 = 'G';
    else if (base1 == 'G') rna1 = 'C';
    else rna1 = '?'; // Unknown/Mutated element

    // Base 2 translation
    if (base2 == 'A') rna2 = 'U';
    else if (base2 == 'T') rna2 = 'A';
    else if (base2 == 'C') rna2 = 'G';
    else if (base2 == 'G') rna2 = 'C';
    else rna2 = '?';

    // Base 3 translation
    if (base3 == 'A') rna3 = 'U';
    else if (base3 == 'T') rna3 = 'A';
    else if (base3 == 'C') rna3 = 'G';
    else if (base3 == 'G') rna3 = 'C';
    else rna3 = '?';

    // 3. Calculate Mutation Risk Factor
    // If any base inputted wasn't a standard A, T, C, or G, increase risk
    if (rna1 == '?') mutation_risk += 33.33;
    if (rna2 == '?') mutation_risk += 33.33;
    if (rna3 == '?') mutation_risk += 33.33;

    // 4. Output the Genetic Lab Report
    printf("\n-------------------------------------------");
    printf("\n             GENETIC LAB REPORT            ");
    printf("\n-------------------------------------------");
    printf("\nInputted DNA Sequence : %c - %c - %c", base1, base2, base3);
    printf("\nTranscribed RNA Strand: %c - %c - %c", rna1, rna2, rna3);
    printf("\nSequence Mutation Risk: %.2f%%", mutation_risk);
    printf("\n-------------------------------------------\n");

    if (mutation_risk > 0) {
        printf("[ALERT] Anomalous base detected. Possible genetic mutation sequence.\n");
    } else {
        printf("[STATUS] Sequence stable. Healthy cellular transcription complete.\n");
    }

    return 0;
}