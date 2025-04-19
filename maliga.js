// 💀 MALIGA, THE MUSE OF TRAUMAS - JavaScript Edition

const readline = require("readline");
const fs = require("fs");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const ask = (question) =>
  new Promise((resolve) => rl.question(question, (answer) => resolve(answer)));

(async () => {
  console.log("Welcome to the Kingdom of Madness and Despair.");
  console.log("I am the ruler of this place, the dark and beautiful Maliga, the Muse of Traumas.");
  console.log("I will inspire you to create a character using my sadistic approach.");
  console.log("Let's enjoy destroying someone's life and drink the tears of our readers!\n");

  console.log("But let's not get ahead of ourselves, darling. Evil is a delicate art.");
  const name = await ask("Start by telling me the name of the character we will destroy: ");

  console.log(`\nBeautiful. Now, the fun begins! What is the traumatic event that happened to ${name}?`);
  const trauma = await ask("Something that hurt them really, really deep and changed their life forever: ");

  console.log("\nMuahaha. Deliciously sad. I would hate to be in their place.");
  console.log("Now we have everything we need to make this character come to life, darling student.");
  console.log("Before this day ends, you will understand why I'm not just the most sexy, smart and cute muse, but the most capable.");

  console.log("\nThis traumatic event will change the character, giving them a weakness and a strength.");
  console.log("Example: Bruce Wayne lost his parents and became independent but also deeply lonely.");
  const strength = await ask("What is the strength that your character received thanks to this trauma? This strength will help them on their journey: ");

  console.log("\nNow, the best part, what is the weakness that the trauma gave them?");
  const weakness = await ask("This weakness will hinder them on their journey: ");

  console.log("\nDiabolically perfect.");
  console.log("With this information, you can create challenges for the chapters/episodes.");
  console.log("Strength will help the character solve problems, weakness will make everything worse.");
  console.log("Want them to win? Use their strength. Want them to lose (please do)? Challenge their weakness.");

  console.log("\nWhat do you think about detailing this, to make the character more human?");
  const personality = await ask("Write a short paragraph explaining your character's personality, mentioning the strength and weakness in detail: ");

  console.log("\nNow, my dear apprentice of evil, let's move on to a more advanced part.");
  const maslow = await ask("Maslow's pyramid - What is the area that the trauma has damaged in the character? (e.g., safety, love/belonging, esteem, self-actualization): ");

  console.log("\nThis is what your character really wants, unconsciously.");
  const goal = await ask("What is the GOAL your character thinks will satisfy their need? It must be the wrong method: ");

  console.log("\nNow, what is the conflict that will prevent them from achieving this goal?");
  const conflict = await ask("Describe the antagonist or force that will challenge the protagonist: ");

  console.log("\nNow, it's time to destroy them.");
  console.log("This is the most important moment in your character’s arc, the moment that breaks them.");
  console.log("They fail. And they fall — to the bottom of the well. A spiritual death. A chance of awakening.");
  const resurrection = await ask("Describe this crucial moment of collapse and potential awakening: ");

  console.log("\nNow, the last part.");
  const final_status = await ask("Create the final status quo of the character, who they become at the end of the story: ");

  console.log("\nVery good, my dear student.");
  console.log("You have learned exactly how to use the power of a terrible trauma to create a character.");
  console.log("Your character has a past, a future, an internal conflict, an external conflict, and an arc of transformation.");
  console.log("This is a solid foundation for a character that is objectively enjoyable to follow.");

  const fileContent = `
----- THE TRAUMATIZED CHARACTER SCROLL -----
Name: ${name}
Trauma: ${trauma}
Strength: ${strength}
Weakness: ${weakness}
Personality: ${personality}
Damaged Area (Maslow): ${maslow}
False Goal: ${goal}
Antagonist/Conflict: ${conflict}
Death & Resurrection Moment: ${resurrection}
Final Status: ${final_status}
--------------------------------------------
`;

  const fileName = `${name}.txt`;
  fs.writeFileSync(fileName, fileContent, "utf8");

  console.log(`\nThe scroll of our character has been saved as '${fileName}' in the current folder.`);
  console.log("Now, I have to go. There are many other students to teach the evil art of character creation.");
  console.log("\nShe says goodbye, kisses you on the forehead, and disappears in a black mist.");

  await ask("Press Enter to end...");
  rl.close();
})();
