const URL = "http://localhost:3000/?user=varsha";

async function test() {
  const requests = [];

  for (let i = 0; i < 20; i++) {
    requests.push(fetch(URL));
  }

  const responses = await Promise.all(requests);

  let success = 0;
  let failed = 0;

  for (const res of responses) {
    if (res.status === 200) {
      success++;
    } else {
      failed++;
    }
  }

  console.log({
    success,
    failed,
  });
}

test();
