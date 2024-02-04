<!DOCTYPE html> 
<html>
	<head>
		<title>Login page</title>
		<link rel="stylesheet" href="style.css">
	</head>
	<body>
		<form action="login.php" method="post"></form>
		<h2>Login</h2>
		<?php if (isset($_GET['error'])) { ?>

<p class="error"><?php echo $_GET['error']; ?></p>

<?php } ?>
			<label for=>Username</label>
			<input type="text "name="uname" placeholder="UserName"><br>
			<label >Password</label>
			<input type="password " name="password" placeholder="Password"><br>
			<button type="submit"></button>
		</form>
	</body>
</html>
