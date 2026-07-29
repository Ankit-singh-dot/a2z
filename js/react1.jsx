import { useState, useEffects } from "react";
function Users() {
  const [user, setUser] = useState([]);
  useEffects(() => {
    async function getUser() {
      const res = await fetch("https://jsonplaceholder.typicode.com/users");
      const data = await res.json();
      setUser(data);
    }
    getUser();
  }, []);
}
return (
  <div>
    {user.map((user) => (
      <p key={user.id}>{user.name}</p>
    ))}
  </div>
);
