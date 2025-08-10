<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Daily Habit Tracker</title>
<style>
    body {
        font-family: Arial, sans-serif;
        background: #f5f5f5;
        text-align: center;
        padding: 20px;
    }
    h1 {
        color: #333;
    }
    input, button {
        padding: 8px;
        margin: 5px;
        border-radius: 5px;
        border: 1px solid #ccc;
    }
    button {
        background: #4CAF50;
        color: white;
        border: none;
        cursor: pointer;
    }
    button:hover {
        background: #45a049;
    }
    ul {
        list-style-type: none;
        padding: 0;
    }
    li {
        background: white;
        padding: 10px;
        margin: 5px auto;
        width: 250px;
        border-radius: 5px;
        display: flex;
        justify-content: space-between;
        align-items: center;
        box-shadow: 0px 0px 5px rgba(0,0,0,0.1);
    }
    .done {
        text-decoration: line-through;
        color: gray;
    }
</style>
</head>
<body>

<h1>Daily Habit Tracker</h1>
<input type="text" id="habitInput" placeholder="Enter a habit">
<button onclick="addHabit()">Add Habit</button>

<ul id="habitList"></ul>

<script>
    let habits = JSON.parse(localStorage.getItem("habits")) || [];

    function saveHabits() {
        localStorage.setItem("habits", JSON.stringify(habits));
    }

    function renderHabits() {
        const list = document.getElementById("habitList");
        list.innerHTML = "";
        habits.forEach((habit, index) => {
            const li = document.createElement("li");
            li.innerHTML = `
                <span class="${habit.done ? 'done' : ''}" onclick="toggleHabit(${index})">${habit.name}</span>
                <button onclick="deleteHabit(${index})">❌</button>
            `;
            list.appendChild(li);
        });
    }

    function addHabit() {
        const input = document.getElementById("habitInput");
        if (input.value.trim() !== "") {
            habits.push({ name: input.value, done: false });
            input.value = "";
            saveHabits();
            renderHabits();
        }
    }

    function toggleHabit(index) {
        habits[index].done = !habits[index].done;
        saveHabits();
        renderHabits();
    }

    function deleteHabit(index) {
        habits.splice(index, 1);
        saveHabits();
        renderHabits();
    }

    renderHabits();
</script>

</body>
</html>
