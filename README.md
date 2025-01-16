
# Implementation Patterns in C++

This repository contains basic implementation patterns in C++ intended for studying and understanding fundamental concepts. The examples here are simplified and designed to focus on core ideas rather than complex use cases.

## Structure

The repository is divided into three main parts:

1. **Befehl_Implementation_Pattern**  
   This folder demonstrates the Command design pattern (`Befehl` translates to "Command" in German). It showcases how commands can be encapsulated as objects to decouple request invocations from their execution.

2. **Pubsub-template**  
   This folder includes an example of a Publish-Subscribe (PubSub) template, a messaging pattern used for event-driven programming.

3. **Watcher-template**  
   This folder includes an example of a Watcher template, a pattern similar to PubSub, but more general. So You can use this more often.

## Note
You may notice some German words (e.g., "Befehl") in the code or filenames. We apologize for this inconsistency—it reflects the original development process. Feel free to treat these as part of the learning experience!

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Implementationpatterns.git
   ```
2. Navigate to the desired pattern folder (e.g., `Befehl_Implementation_Pattern`) and build the project using the provided `Makefile`:
   ```bash
   cd Befehl_Implementation_Pattern
   make
   ```

3. Run the compiled program:
   ```bash
   ./main
   ```

4. Clean up the build files:
   ```bash
   make clean
   ```

## Purpose

The goal of this repository is to:
- Provide simple examples of widely used implementation patterns in C++.
- Serve as a reference for beginners to understand design patterns and coding practices.

## Contributing

Contributions are welcome! If you would like to improve the examples, translate terms into English, or add new patterns, feel free to create a pull request.

## License

This project is open-source and available under the [MIT License](LICENSE).
