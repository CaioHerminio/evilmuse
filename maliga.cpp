// 💀 MALIGA, THE MUSE OF TRAUMAS - C++ Edition

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string name, trauma, strength, weakness, personality;
    std::string maslow, goal, conflict, resurrection, final_status;

    std::cout << "Welcome to the Kingdom of Madness and Despair.\n";
    std::cout << "I am the ruler of this place, the dark and beautiful Maliga, the Muse of Traumas.\n";
    std::cout << "I will inspire you to create a character using my sadistic approach.\n";
    std::cout << "Let's enjoy destroying someone's life and drink the tears of our readers!\n";

    std::cout << "\nBut let's not get ahead of ourselves, darling. Evil is a delicate art.\n";
    std::cout << "Start by telling me the name of the character we will destroy: ";
    std::getline(std::cin, name);

    std::cout << "\nBeautiful. Now, the fun begins! What is the traumatic event that happened to " << name << "?\n";
    std::cout << "Something that hurt them really, really deep and changed their life forever: ";
    std::getline(std::cin, trauma);

    std::cout << "\nMuahaha. Deliciously sad. I would hate to be in their place.\n";
    std::cout << "Now we have everything we need to make this character come to life, darling student.\n";
    std::cout << "Before this day ends, you will understand why I'm not just the most sexy, smart and cute muse, but the most capable.\n";

    std::cout << "\nThis traumatic event will change the character, giving them a weakness and a strength.\n";
    std::cout << "Example: Bruce Wayne lost his parents and became independent but also deeply lonely.\n";
    std::cout << "What is the strength that your character received thanks to this trauma? This strength will help them on their journey: ";
    std::getline(std::cin, strength);

    std::cout << "\nNow, the best part, what is the weakness that the trauma gave them?\n";
    std::cout << "This weakness will hinder them on their journey: ";
    std::getline(std::cin, weakness);

    std::cout << "\nDiabolically perfect.\n";
    std::cout << "With this information, you can create challenges for the chapters/episodes.\n";
    std::cout << "Strength will help the character solve problems, weakness will make everything worse.\n";
    std::cout << "Want them to win? Use their strength. Want them to lose (please do)? Challenge their weakness.\n";

    std::cout << "\nWhat do you think about detailing this, to make the character more human?\n";
    std::cout << "Write a short paragraph explaining your character's personality, mentioning the strength and weakness in detail: ";
    std::getline(std::cin, personality);

    std::cout << "\nNow, my dear apprentice of evil, let's move on to a more advanced part.\n";
    std::cout << "Maslow's pyramid - What is the area that the trauma has damaged in the character? (e.g., safety, love/belonging, esteem, self-actualization): ";
    std::getline(std::cin, maslow);

    std::cout << "\nThis is what your character really wants, unconsciously.\n";
    std::cout << "What is the GOAL your character thinks will satisfy their need? It must be the wrong method: ";
    std::getline(std::cin, goal);

    std::cout << "\nNow, what is the conflict that will prevent them from achieving this goal?\n";
    std::cout << "Describe the antagonist or force that will challenge the protagonist: ";
    std::getline(std::cin, conflict);

    std::cout << "\nNow, it's time to destroy them.\n";
    std::cout << "This is the most important moment in your character’s arc, the moment that breaks them.\n";
    std::cout << "What will happen when the character finally loses their GOAL, is defeated, humiliated?\n";
    std::cout << "Picture it: they invested everything, every emotion, every breath, into chasing something they believed would make them whole.\n";
    std::cout << "And yet... it was the wrong thing all along. The goal fails. They fail. And they fall — to the bottom of the well.\n";
    std::cout << "This is their spiritual death. A moment of absolute hopelessness. No more illusions. No more plans.\n";
    std::cout << "But within this darkness, a spark: the epiphany. Inside this 'cave of death', they may discover the truth.\n";
    std::cout << "The GOAL was never the real solution. The NEED — the true wound — is something deeper.\n";
    std::cout << "And now, they are faced with a choice: grow and rise anew... or fall into an even deeper layer of self-deception.\n";
    std::cout << "We won’t craft every nuance right now. Just sketch out what this moment of DEATH and possible RESURRECTION might look like.\n";
    std::getline(std::cin, resurrection);

    std::cout << "\nNow, the last part.\n";
    std::cout << "Create the final status quo of the character, who they become at the end of the story: ";
    std::getline(std::cin, final_status);

    std::cout << "\nVery good, my dear student.\n";
    std::cout << "You have learned exactly how to use the power of a terrible trauma to create a character.\n";
    std::cout << "Your character has a past, a future, an internal conflict, an external conflict, and an arc of transformation.\n";
    std::cout << "This is a solid foundation for a character that is objectively enjoyable to follow.\n";

    // Create a file with the character's name
    std::string file_name = name + ".txt";
    std::ofstream file(file_name);

    if (file.is_open()) {
        file << "----- THE TRAUMATIZED CHARACTER SCROLL -----\n";
        file << "Name: " << name << "\n";
        file << "Trauma: " << trauma << "\n";
        file << "Strength: " << strength << "\n";
        file << "Weakness: " << weakness << "\n";
        file << "Personality: " << personality << "\n";
        file << "Damaged Area (Maslow): " << maslow << "\n";
        file << "False Goal: " << goal << "\n";
        file << "Antagonist/Conflict: " << conflict << "\n";
        file << "Death & Resurrection Moment: " << resurrection << "\n";
        file << "Final Status: " << final_status << "\n";
        file << "--------------------------------------------\n";
        file.close();

        std::cout << "\nThe scroll of our character has been saved as '" << file_name << "' in the current folder.\n";
        std::cout << "Now, I have to go. There are many other students to teach the evil art of character creation.\n";
        std::cout << "\nShe says goodbye, kisses you on the forehead, and disappears in a black mist.\n";
    } else {
        std::cout << "Error creating file. The spell failed! Perhaps the forces of good interfered?\n";
    }

    std::cout << "Press Enter to end...";
    std::cin.get();
    return 0;
}
