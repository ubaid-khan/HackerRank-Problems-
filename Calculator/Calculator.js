
		function display(val){
			document.getElementById("result").value += val;
		}

		function solve(){
			let x = document.getElementById("result").value;
			let y = eval(x);
			document.getElementById("result").value=y;
		}

		function clr(){
			document.getElementById("result").value = "";
		}

		function backspace(){
			var valueOfInput = document.getElementById('result').value;
			document.getElementById('result').value = valueOfInput.substring(0,valueOfInput.length-1);
		}