function rollDice() {
    let diceFaces = ["1", "2", "3", "4", "5", "6"];
    let randomIndex = Math.floor(Math.random() * 6);
    document.getElementById("dice").innerText = diceFaces[randomIndex];
}