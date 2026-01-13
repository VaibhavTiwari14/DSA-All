const fs = require("fs");
const path = require("path");

// ------------ EDIT THESE VARIABLES -----------------
const action = "create"; // "create" or "delete"
const fileName = "Maths"; // no extension
const nestedPath = "BasicMaths";
// keep "" if you don't want nested folders
// -----------------------------------------------------

// Config for all languages
const configs = {
  cpp: {
    folder: "C++",
    extension: ".cpp",
    template: `#include <bits/stdc++.h>
using namespace std;

int main() {
    // ${fileName}
    return 0;
}
`,
  },

  java: {
    folder: "Java",
    extension: ".java",
    template: `public class ${fileName} {
    public static void main(String[] args) {
        System.out.println("Running ${fileName}");
    }
}
`,
  },

  js: {
    folder: "JS",
    extension: ".js",
    template: `console.log("Running ${fileName} in JavaScript");`,
  },

  python: {
    folder: "Python",
    extension: ".py",
    template: `print("Running ${fileName} in Python")`,
  },
};

// Root
const root = __dirname;

// Function to build full path
function getFullPath(langConfig) {
  const baseFolder = path.join(root, langConfig.folder);

  // If nestedPath = "", return direct folder
  const finalFolder = nestedPath
    ? path.join(baseFolder, nestedPath)
    : baseFolder;

  const fileNameWithExt = fileName + langConfig.extension;
  const finalPath = path.join(finalFolder, fileNameWithExt);

  return { finalFolder, finalPath };
}

console.log(`\n=== DSA Manager Running (${action.toUpperCase()}) ===\n`);

Object.keys(configs).forEach((lang) => {
  const config = configs[lang];
  const { finalFolder, finalPath } = getFullPath(config);

  if (action === "create") {
    // Create folder if needed
    if (!fs.existsSync(finalFolder)) {
      fs.mkdirSync(finalFolder, { recursive: true });
      console.log(`📁 Created folder: ${finalFolder}`);
    }
    // Create file
    fs.writeFileSync(finalPath, config.template);
    console.log(`✅ Created: ${finalPath}`);
  } else if (action === "delete") {
    if (fs.existsSync(finalPath)) {
      fs.unlinkSync(finalPath);
      console.log(`🗑️ Deleted: ${finalPath}`);
    } else {
      console.log(`⚠️ File not found: ${finalPath}`);
    }
  }
});

console.log("\n🎉 Task Completed!\n");
