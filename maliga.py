# 💀 MALIGA, THE MUSE OF TRAUMAS - Python Edition

print("Welcome to the Kingdom of Madness and Despair.")
print("I am the ruler of this place, the dark and beautiful Maliga, the Muse of Traumas.")
print("I will inspire you to create a character using my sadistic approach.")
print("Let's enjoy destroying someone's life and drink the tears of our readers!")

print("\nBut let's not get ahead of ourselves, darling. Evil is a delicate art.")
name = input("Start by telling me the name of the character we will destroy: ")

print(f"\nBeautiful. Now, the fun begins! What is the traumatic event that happened to {name}?")
trauma = input("Something that hurt them really, really deep and changed their life forever: ")

print("\nMuahaha. Deliciously sad. I would hate to be in their place.")
print("Now we have everything we need to make this character come to life, darling student.")
print("Before this day ends, you will understand why I'm not just the most sexy, smart and cute muse, but the most capable.")

print("\nThis traumatic event will change the character, giving them a weakness and a strength.")
print("Example: Bruce Wayne lost his parents and became independent but also deeply lonely.")
strength = input("What is the strength that your character received thanks to this trauma? This strength will help them on their journey: ")

print("\nNow, the best part, what is the weakness that the trauma gave them?")
weakness = input("This weakness will hinder them on their journey: ")

print("\nDiabolically perfect.")
print("With this information, you can create challenges for the chapters/episodes.")
print("Strength will help the character solve problems, weakness will make everything worse.")
print("Want them to win? Use their strength. Want them to lose (please do)? Challenge their weakness.")

print("\nWhat do you think about detailing this, to make the character more human?")
personality = input("Write a short paragraph explaining your character's personality, mentioning the strength and weakness in detail: ")

print("\nNow, my dear apprentice of evil, let's move on to a more advanced part.")
maslow = input("Maslow's pyramid - What is the area that the trauma has damaged in the character? (e.g., safety, love/belonging, esteem, self-actualization): ")

print("\nThis is what your character really wants, unconsciously.")
goal = input("What is the GOAL your character thinks will satisfy their need? It must be the wrong method: ")

print("\nNow, what is the conflict that will prevent them from achieving this goal?")
conflict = input("Describe the antagonist or force that will challenge the protagonist: ")

print("\nNow, it's time to destroy them.")
print("This is the most important moment in your character’s arc, the moment that breaks them.")
print("What will happen when the character finally loses their GOAL, is defeated, humiliated?")
print("Picture it: they invested everything, every emotion, every breath, into chasing something they believed would make them whole.")
print("And yet... it was the wrong thing all along. The goal fails. They fail. And they fall — to the bottom of the well.")
print("This is their spiritual death. A moment of absolute hopelessness. No more illusions. No more plans.")
print("But within this darkness, a spark: the epiphany. Inside this 'cave of death', they may discover the truth.")
print("The GOAL was never the real solution. The NEED — the true wound — is something deeper.")
print("And now, they are faced with a choice: grow and rise anew... or fall into an even deeper layer of self-deception.")
print("We won’t craft every nuance right now. Just sketch out what this moment of DEATH and possible RESURRECTION might look like.")
resurrection = input("Describe this crucial moment of collapse and potential awakening: ")

print("\nNow, the last part.")
final_status = input("Create the final status quo of the character, who they become at the end of the story: ")

print("\nVery good, my dear student.")
print("You have learned exactly how to use the power of a terrible trauma to create a character.")
print("Your character has a past, a future, an internal conflict, an external conflict, and an arc of transformation.")
print("This is a solid foundation for a character that is objectively enjoyable to follow.")

# Create a .txt file with the character's name as the title
file_name = f"{name}.txt"
with open(file_name, "w", encoding="utf-8") as file:
    file.write("----- THE TRAUMATIZED CHARACTER SCROLL -----\n")
    file.write(f"Name: {name}\n")
    file.write(f"Trauma: {trauma}\n")
    file.write(f"Strength: {strength}\n")
    file.write(f"Weakness: {weakness}\n")
    file.write(f"Personality: {personality}\n")
    file.write(f"Damaged Area (Maslow): {maslow}\n")
    file.write(f"False Goal: {goal}\n")
    file.write(f"Antagonist/Conflict: {conflict}\n")
    file.write(f"Death & Resurrection Moment: {resurrection}\n")
    file.write(f"Final Status: {final_status}\n")
    file.write("--------------------------------------------\n")

print(f"\nThe scroll of our character has been saved as '{file_name}' in the current folder. Now, I have to go. There are many other students to teach the evil art of character creation.")

print("\nShe says goodbye, kisses you on the forehead, and disappears in a black mist.")
input("Press Enter to end...")
