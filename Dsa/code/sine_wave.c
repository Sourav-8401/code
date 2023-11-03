#include <stdio.h>
#include <math.h>

int main() {
  // Define the amplitude, frequency, and phase of the sine wave.
  double amplitude = 1.0;
  double frequency = 1.0;
  double phase = 0.0;

  // Create a buffer to store the sine wave samples.
  double samples[1024];

  // Generate the sine wave samples.
  for (int i = 0; i < 1024; i++) {
    samples[i] = amplitude * sin(2 * M_PI * frequency * i / 1024.0 + phase);
  }

  // Write the sine wave samples to a file.
  FILE *fp = fopen("sine_wave.txt", "wb");
  fwrite(samples, sizeof(double), 1024, fp);
  fclose(fp);

  return 0;
}